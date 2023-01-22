class DirReduction
{
public:
	static std::vector<std::string> dirReduc(std::vector<std::string>& arr) {
	std::string n = "NORTH", s = "SOUTH", e = "EAST", w = "WEST";
    int g = arr.size();
		for (int i = 1; i < g; i++) {
			if ((arr[i] == n && arr[i - 1] == s) || (arr[i] == s && arr[i - 1] == n) || (arr[i] == e && arr[i - 1] == w) || (arr[i] == w && arr[i - 1] == e)) {
				arr.erase(arr.begin() + i - 1);
				arr.erase(arr.begin() + i - 1);
				i = 0;
        g -= 2;
			}

		}
  return arr;
	};

};
