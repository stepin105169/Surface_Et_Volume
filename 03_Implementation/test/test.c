#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#define PROJECT_NAME    "Sample"
#include<sample1.h>

void test_sphere(void);
void test_cone(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "sphere", test_sphere);
  CU_add_test(suite, "cone", test_cone);


  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}

void test_sphere(void)
	{
	CU_ASSERT(113.040001 == sphere(3));
  	//TEST_ASSERT_EQUAL(113.040001, sphere(3));
	}

void test_cone(void)
	{
	CU_ASSERT(25.120001 == cone(2,2));
        //TEST_ASSERT_EQUAL(25.120001, cone(2,2));
	}
