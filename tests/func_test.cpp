#include <gtest/gtest.h>
#include <testing/testing.hpp>


namespace{
    
class MyFuncTest : public ::testing::Test{};

TEST_F(MyFuncTest,isSame)
{
    EXPECT_EQ(0, func());
}

} // unnamed namespace