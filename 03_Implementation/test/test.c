#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#define PROJECT_NAME    "Sample"
#include<sample1.h>

void test_circle(void);
void test_square(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "circle", test_circle);
  CU_add_test(suite, "square", test_square);


  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}

void test_circle(void)
	{
	CU_ASSERT(50.240002 == circle(4));
	}

void test_square(void)
	{
	CU_ASSERT(36.000000 == square(6));
	}
