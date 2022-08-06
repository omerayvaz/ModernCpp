#include "../api/html_writer.hpp"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

void html_writer::OpenDocument() {
  std::cout << "<!DOCTYPE html>" << std::endl;
  std::cout << "<html>" << std::endl;
}

void html_writer::CloseDocument() { std::cout << "</html>" << std::endl; }

void html_writer::AddTitle(const std::string &title) {
  std::cout << "<title>" << title << "</title>" << std::endl;
}

void html_writer::AddCSSStyle(const std::string &stylesheet) {
  std::cout << "<head>" << std::endl;
  std::cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\""
            << stylesheet << "\" />" << std::endl;
  std::cout << "</head>" << std::endl;
}

void html_writer::OpenBody() { std::cout << "<body>" << std::endl; }
void html_writer::CloseBody() { std::cout << "</body>" << std::endl; }

void html_writer::OpenRow() { std::cout << "<div class=\"row\">" << std::endl; }
void html_writer::CloseRow() { std::cout << "</div>" << std::endl; }

void html_writer::AddImage(const std::string &img_path, float score,
                           bool highlight) {
  static std::string path;
  static std::string image_folder;
  static std::string file_num;
  static std::string file_extension;
  path = img_path;
  // cout << path << endl;
  size_t flag = path.find_first_of("/");
  image_folder = path.substr(0, flag);
  size_t flag2 = path.find_first_of(".");
  file_num = path.substr(flag + 1, flag2 - flag - 1);
  file_extension = path.substr(flag2 + 1, path.length());

  if (file_extension != "jpg" && file_extension != "png") {
    std::cerr << "stderr wrong extension" << std::endl;
  }
  if (highlight == true) {
    std::cout << "<div class = \"column\" style = \"border: 5px solid green;\">"
              << std::endl;
  } else {
    std::cout << "<div class = \"column\">" << std::endl;
  }
  std::cout << "<h2>" << file_num + "." + file_extension << "</h2>"
            << std::endl;
  std::cout << "<img src=" << path << " />" << std::endl;
  std::cout << "<p>score = " << score << "</p>" << std::endl;
  std::cout << "</div>" << std::endl;
}

