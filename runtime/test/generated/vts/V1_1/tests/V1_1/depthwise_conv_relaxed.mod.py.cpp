// Generated from depthwise_conv_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::depthwise_conv_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::depthwise_conv_relaxed::get_examples());
}

TEST_F(ValidationTest, depthwise_conv_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv_relaxed

namespace generated_tests::depthwise_conv_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::depthwise_conv_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv_relaxed {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv_relaxed_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::depthwise_conv_relaxed::get_examples_2());
}

TEST_F(ValidationTest, depthwise_conv_relaxed_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv_relaxed::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depthwise_conv_relaxed
