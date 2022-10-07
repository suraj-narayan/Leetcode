class MyCalendarThree {
private:
    map <int, int> m;
    int maxCount = 0;
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int count = 0;
        m[start]++; m[end]--;
        for (auto it:m){
            count += it.second;
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
    };