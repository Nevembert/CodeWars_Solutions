class DigPow
{
public:
	static int pow(int a, int b) {
		int c = 1;
		for (int i = 1; i <= b; i++) {
			c *= a;
		}
		return c;
	}
	static int digPow(int m, int p) {
		int k = -1, n = m;
		int s[10];
		for (int i = 0; i < 10; i++) {
			s[i] = 0;
		}
		for (int i = 0; i <= 10; i++) {
			s[9 - i] = n % 10;
			if (n < 10) break;
			n /= 10;
		}

		while (s[0] == 0) {
				s[0] = s[1];
				s[1] = s[2];
				s[2] = s[3];
				s[3] = s[4];
				s[4] = s[5];
				s[5] = s[6];
				s[6] = s[7];
				s[7] = s[8];
				s[8] = s[9];
				s[9] = 0;
		}
		int num;
		for (int i = 9; i > 0; i--) {
			if (s[i] != 0) {
				num = i + 1;
				break;
			}
		}

		int sum = 0;
		for (int i = 0; i < num; i++) {
			sum += DigPow::pow(s[i], p + i);
		}

		int answer = -1;
		if (sum % m == 0) {
			answer = sum / m;
		}


		return answer;
	};
};
