template<typename T>
T pow_mod(T x, T y, T mod) {
	x %= mod;
	T ret = 1 % mod;
	while (y > 0) {
		if (y % 2 == 1) (ret *= x) %= mod;
		y /= 2;
		(x *= x) %= mod;
	}
	return ret;
}
