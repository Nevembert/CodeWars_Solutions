int persistence(long long m) {
	int n = m, mul = 1, k = 0;
	std::string num = std::to_string(n);
	int nuk = num.length();
	for (int i = 0; nuk > 1; i++, k++) {
		for (int j = 0; j < nuk; j++) {
			mul *= num[j] - '0';
		}
		num = std::to_string(mul);
		nuk = num.length();
		n = mul;
		mul = 1;
	}
	return k;
}
