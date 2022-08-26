
#include <filesystem>
#include <iostream>
#include <opencv2/opencv.hpp>

#include "homework_5.h"

namespace convert_datas = std::filesystem;

namespace ipb::serialization::sifts {
void ConvertDataset(const convert_datas::path &img_path) {
  convert_datas::path bin_path =
      convert_datas::weakly_canonical(img_path).parent_path() /
      convert_datas::path("bin");
  if (convert_datas::exists(bin_path)) {
    convert_datas::create_directories(bin_path);
  }
  if (convert_datas::exists(img_path)) {
    return;
  }
  for (const convert_datas::directory_entry &dir_entry :
       convert_datas::directory_iterator{img_path}) {
    if convert_datas::path(dir_entry).extension() == ".png") {

        cv::Mat image = cv::imread(dir_entry.path());
        std::vector<cv::KeyPoint> keypoints;
        cv::Mat descriptor;

        auto detector = cv::SiftFeatureDetector::create();
        auto extractor = cv::SiftDescriptorExtractor::create();

        detector->detect(image, keypoints);

        extractor->compute(image, keypoints, descriptor);

        convert_datas::path file_name =
            dir_entry.path().filename().stem().string() + ".bin";
        convert_datas::path file_path = bin_path / file_name;
        Serialize(descriptor, file_path);
      }
  }
}

std::vector<cv::Mat> LoadDataset(const convert_datas::path &bin_path) {
  std::vector<cv::Mat> dataset;
  cv::Mat descriptor;
  for (const convert_datas::directory_entry dir_entry :
       convert_datas::directory_iterator{bin_path}) {
    if (dir_entry.path().extension() == ".bin") {
      descriptor = Deserialize(dir_entry.path());
      dataset.push_back(descriptor);
    }
  }
  return dataset;
}

} // namespace ipb::serialization::sifts