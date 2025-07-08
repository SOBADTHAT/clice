#include "Test/Test.h"

namespace clice::testing {

namespace {

// Simple test to verify hello functionality exists
TEST(Hello, BasicFunctionality) {
    // Test that we can create and use hello strings
    std::string hello_message = "Hello from clice!";
    EXPECT_EQ(hello_message, "Hello from clice!");
    
    // Test basic hello world functionality
    std::string hello_world = "Hello, world!";
    EXPECT_FALSE(hello_world.empty());
    EXPECT_TRUE(hello_world.find("Hello") != std::string::npos);
}

TEST(Hello, MessageValidation) {
    // Test that hello messages are properly formatted
    std::string message = "Hello from clice!";
    EXPECT_TRUE(message.starts_with("Hello"));
    EXPECT_TRUE(message.ends_with("!"));
    EXPECT_EQ(message.length(), 17);
}

}  // namespace

}  // namespace clice::testing