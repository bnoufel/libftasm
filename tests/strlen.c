#include "tests.h"
int test_empty_strlen(t_test *test) {
    size_t i = ft_strlen("");
    size_t j = strlen("");
	int ret = 0;
    if (i != j)
    {
		if (test->debug) {
			printf("%sft_strlen %zu%s\n", RED, i, RESET);
			printf("   %sstrlen %zu%s\n", GREEN, j, RESET);
		}
		return ret += 1;
	}
    return ret;
}
int test_normal_strlen(t_test *test) {
    size_t i = ft_strlen(" dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi");
    size_t j = strlen(" dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi");
	int ret = 0;
    if (i != j)
    {
		if (test->debug) {
			printf("%sft_strlen %zu%s\n", RED, i, RESET);
			printf("   %sstrlen %zu%s\n", GREEN, j, RESET);
		}
		return ret += 1;
	}
    return ret;
}
int test_large_strlen(t_test *test) {
    size_t i = ft_strlen(" dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi");
    size_t j = strlen(" dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi dhqw dhqwiud h hddihudihdih uiuduhwduihwiud  d hdhidwihdwi");
	int ret = 0;
    if (i != j)
    {
		if (test->debug) {
			printf("%sft_strlen %zu%s\n", RED, i, RESET);
			printf("   %sstrlen %zu%s\n", GREEN, j, RESET);
		}
		return ret += 1;
	}
    return ret;
}


void test_strlen(t_test *test) {
    int ret = 0;
    ret += test_empty_strlen(test);
    ret += test_normal_strlen(test);
    ret += test_large_strlen(test);
    if (ret > 0)
        WRONG("strlen");
    else
        GOOD("strlen");
}