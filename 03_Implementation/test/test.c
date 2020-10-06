#include <unity.h>
#include <unity_internals.h>
#include <sample1.h>

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_sphere(void)
	{
  		TEST_ASSERT_EQUAL(113.040001, sphere(3));
	}

    void test_cone(void)
	{
        TEST_ASSERT_EQUAL(25.120001, cone(2,2));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
	  	RUN_TEST(test_sphere);
	  	RUN_TEST(test_cone);


  		return UNITY_END();
	}
