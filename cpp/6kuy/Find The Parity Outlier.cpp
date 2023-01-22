int FindOutlier(std::vector<int> arr)
{
    int result;
    int sum = arr.size();
    if (arr[0] % 2 == 0) {
        if (arr[1] % 2 == 1 || arr[1] % 2 == -1) {
            if (arr[2] % 2 == 0) {
                result = arr[1];
            } else if (arr[2] % 2 == 1 || arr[2] % 2 == -1) {
                result = arr[0];
            }
        }
    } else if (arr[0] % 2 == 1 || arr[0] % 2 == -1) {
        if (arr[1] % 2 == 0) {
            if (arr[2] % 2 == 1 || arr[2] % 2 == -1) {
                result = arr[1];
            } else if (arr[2] % 2 == 0) {
                result = arr[0];
            }
        }
    }

    for (int i = 2;i < sum; i++) {
        if ((arr[i - 2] % 2 == arr[i - 1] % 2 || arr[i - 2] % 2 == -arr[i - 1] % 2) && ((arr[i - 1] % 2 != arr[i] % 2) && (arr[i - 1] % 2 != -arr[i] % 2))) {
            result = arr[i];
            break;
        }
    }
    return result;
}
