#include "tests.h"
#define LARGE_TEST "The mayor of Iselia, tells Lloyd and Genis that they are not allowed to go, and that Kratos and Raine shall be Colette's guards during her journey. Lloyd is upset and leaves. Genis and Colette follow him. Genis wishes Colette a happy birthday and gives her a batch of his cookies. Lloyd says that he has a necklace almost ready for her and that he'll give it to her before she leaves the next day. Colette says that she'll go to his house tonight to tell him when they are leaving. Genis asks Lloyd if he can go part of the way to his house with him. Lloyd says sure. As the two along with Lloyd's dog Noishe, leave the village, the guards tell them to be careful and stay away from the Iselia Human Ranch. Genis seems a bit worried but Lloyd promises them that he hasn't been around it at all. They leave the village and enter the Iselia Forest."
int test_null_strjoin(t_test *test) {
    char *str = ft_strjoin("", "");
	int ret = 0;
    if (strcmp(str, "") != 0) {
		if (test->debug) {
    	    printf("%sft_strjoin: %s%s\n", RED, str, RESET);
    	    printf("   %sstrjoin: %s%s\n", GREEN, "", RESET);
    	}
        ret += 1;
    }
    free(str);
    return ret;
}

int test_normal_strjoin(t_test *test) {
	int ret = 0;
    char *str = ft_strjoin("Un jour le soleil ", "se leva tard");
    if (strcmp(str, "Un jour le soleil se leva tard") != 0) {
		if (test->debug) {
    	    printf("%sft_strjoin: %s%s\n", "", str, "");
    	    printf("   %sstrjoin: %s%s\n", "", "Un jour le soleil se leva tard", "");
    	}
        return ret += 1;
    }
    free(str);
    return ret;
}

int test_large_strjoin(t_test *test) {
	int ret = 0;
    char *str = ft_strjoin(
		"The mayor of Iselia, tells Lloyd and Genis that they are not allowed to go, and that Kratos and Raine shall be Colette's guards during her journey. Lloyd is upset and leaves. Genis and Colette follow him. Genis wishes Colette a happy birthday and gives her a batch of his cookies. Lloyd says that he has a necklace almost ready for her and that he'll give it to her before she leaves the next day. Colette says that she'll go to his house tonight to tell him when they are leaving. Genis asks Lloyd if he can go part of the way to his house with him. Lloyd says sure.",
		" As the two along with Lloyd's dog Noishe, leave the village, the guards tell them to be careful and stay away from the Iselia Human Ranch. Genis seems a bit worried but Lloyd promises them that he hasn't been around it at all. They leave the village and enter the Iselia Forest.");

    if (strcmp(str, LARGE_TEST) != 0) {
		if (test->debug) {
    	    printf("%sft_strjoin: %s%s\n", "", str, "");
    	    printf("%s   strjoin: %s%s\n", "", LARGE_TEST, "");
    	}
        ret += 1;
    }
    return ret;
}
void test_strjoin(t_test *test) {
    int ret = 0;
    ret += test_null_strjoin(test);
    ret += test_normal_strjoin(test);
    ret += test_large_strjoin(test);
    if (ret > 0)
        WRONG("strjoin");
    else
        GOOD("strjoin");
}