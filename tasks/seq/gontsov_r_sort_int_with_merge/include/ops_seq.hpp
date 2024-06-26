// Copyright 2024 Gontsov Roman
#pragma once

#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "core/task/include/task.hpp"

class RadixSortTaskSequential : public ppc::core::Task {
 public:
  explicit RadixSortTaskSequential(std::shared_ptr<ppc::core::TaskData> taskData_) : Task(std::move(taskData_)) {}
  bool pre_processing() override;
  bool validation() override;
  bool run() override;
  bool post_processing() override;

 private:
  std::vector<int> VectorForSort;
  int SizeVector = 0;
};
