#include "../api/image_browser.hpp"
#include "../api/html_"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

void image_browser::AddFullRow(const ImageRow &row, bool first_row) {
  html_writer::OpenRow();
  bool highlight = false;
  for (int i = 0; i < 3; i++) {
    if (i == 0)
      highlight = first_row;
    else
      highlight = false;
    html_writer::AddImage(std::get<0>(row[i]), std::get<1>(row[i]), highlight);
  }
  html_writer::CloseRow();
}

void image_browser::CreateImageBrowser(const std::string &title,
                                       const std::string &stylesheet,
                                       const std::vector<ImageRow> &rows) {
  html_writer::OpenDocument();
  html_writer::AddTitle(title);
  html_writer::AddCSSStyle(stylesheet);
  html_writer::OpenBody();

  for (int i = 0; i < rows.size(); i++) {
    if (i == 0) {
      image_browser::AddFullRow(rows[i], true);
    } else {
      image_browser::AddFullRow(rows[i], false);
    }
  }
}