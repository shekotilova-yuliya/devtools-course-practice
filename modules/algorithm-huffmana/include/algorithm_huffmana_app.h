// Copyright 2021 Schekotilova Julia

#ifndef MODULES_ALGORITHM_HUFFMANA_INCLUDE_ALGORITHM_HUFFMANA_APP_H_
#define MODULES_ALGORITHM_HUFFMANA_INCLUDE_ALGORITHM_HUFFMANA_APP_H_

#include <string>
#include <vector>

class AlgorithmHuffmanaApp {
 public:
  AlgorithmHuffmanaApp();
  std::string operator()(int argc, const char** argv);
 private:
  std::string message_;
  std::string convert(std::vector<std::string> _part_of_result);
  bool validateNumberOfArguments(int argc, const char** argv);
  void help(const char* appname, const char* message = "");
};

#endif  // MODULES_ALGORITHM_HUFFMANA_INCLUDE_ALGORITHM_HUFFMANA_APP_H_
