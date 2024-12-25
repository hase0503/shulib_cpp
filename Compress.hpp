template<typename T>
map<T, int> compress(vector<T> v) {
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	map<T, int> ret;
	for (int i = 0; i < int(v.size()); ++i) ret[v[i]] = i;
	return ret;
}
