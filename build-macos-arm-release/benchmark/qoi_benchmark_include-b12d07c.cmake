if(EXISTS "/Users/brayden/Documents/School/Fifth Year/Computer Security/Assignment1/build-macos-arm-release/benchmark/qoi_benchmark_tests-b12d07c.cmake")
  include("/Users/brayden/Documents/School/Fifth Year/Computer Security/Assignment1/build-macos-arm-release/benchmark/qoi_benchmark_tests-b12d07c.cmake")
else()
  add_test(qoi_benchmark_NOT_BUILT-b12d07c qoi_benchmark_NOT_BUILT-b12d07c)
endif()
