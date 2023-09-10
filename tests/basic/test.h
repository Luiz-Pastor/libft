#ifndef _TEST_H
#define _TEST_H

/*******************STARTS COLORS*******************/
#ifndef NOCOLOR
#define KRED  "\x1B[31m"  /*!< Red color*/
#define KGRN  "\x1B[32m"  /*!< Green color*/
#define KYEL  "\x1B[33m"  /*!< Yellow color*/
#define KCYN  "\x1B[36m"  /*!< Cyan color*/
#define KMAG  "\x1B[35m"  /*!< Magenta color*/
#define KRESET "\033[0m"  /*!< Reset the text color */
#else
#define KRED
#define KGRN
#define KYEL
#define KCYN
#define KRESET
#endif
/********************END  COLORS********************/

#pragma GCC diagnostic ignored "-Wpedantic"


#define PRINT_TEST_RESULT(x) do{					\
    __test_counter++;							\
    __pass = (x);							\
    __test_passed = (__pass)? __test_passed + 1 : __test_passed;	\
    printf(KYEL "%s" KRESET " line "  "%d " KCYN "%s" KRESET ": %s\n",	\
	   __FILE__, __LINE__ , __FUNCTION__,				\
	   ((!__pass) ? KRED "NOT PASS" KRESET : KGRN "PASS" KRESET));	\
  } while (0) /*!< It analyzes if the test meets your requirements or not */

#define FORCE_PLUS(){ \
  __test_counter++; \
  __test_passed++;  \
  __pass = 1; \
}

#define FORCE_FAIL(){ \
  __test_counter++; \
}

#define FORCE_RESET(){  \
  __test_counter = 0;   \
  __test_passed  = 0;   \
  __pass = 0;           \
}

#define PRINT_PASSED_PERCENTAGE printf("Tests passed %d%%\n\n", ((__test_passed * 100) / __test_counter))   /*!< It prints the percentage of tests that meet your requirements */
      
static int __test_counter = 0;
static int __test_passed  = 0;
static int __pass = 0;

void    free_memory(int count, ...);

#endif
