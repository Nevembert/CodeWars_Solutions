#include <cstdint>

int64_t elder_age(int64_t m, int64_t n, int64_t l, int64_t t)
{
	int64_t sum = 0;
  int64_t i = 0;
  int64_t j = 0;
	while(i < m) {
		while(j < n) {
			if((i ^ j) - l >= 0){
				sum = sum + (i ^ j) - l;
        j = j + 1;
			}
		}
    i = i + 1;
	}
	return (unsigned)sum % t;
}
