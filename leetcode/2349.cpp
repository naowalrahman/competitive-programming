#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
   public:
    map<int, set<int>> num_to_indexes;
    map<int, int> index_to_num;
    NumberContainers() {
        /*
         map<int, set<int>>, key = number, val = index
         map<int, int>, key = index, val = number
        */
    }

    void change(int index, int number) {
        if (index_to_num[index] == 0) {
            index_to_num[index] = number;
            if (num_to_indexes.find(number) == num_to_indexes.end()) {
                num_to_indexes[number] = set<int>({index});
            } else {
                num_to_indexes[number].insert(index);
            }
        } else {
            int prev = index_to_num[index];
            num_to_indexes[prev].erase(num_to_indexes[prev].find(index));
            index_to_num[index] = number;
            num_to_indexes[number].insert(index);
        }
    }

    int find(int number) {
        int get = *(num_to_indexes[number].begin());
        return get == 0 ? -1 : get;
    }
};
