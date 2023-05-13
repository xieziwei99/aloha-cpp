#include "common/common.h"
#include "common/utils.h"

int main() {
    std::vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    auto it = BinarySearch(arr, 5);
    print(*it);
    return 0;
}
