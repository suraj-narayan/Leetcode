class MedianFinder {
public:
    /**
    leftHalf -> maxHeap
    rightHalf -> minHeap
    */
    priority_queue<int> leftHalf;
    priority_queue<int,vector<int>, greater<int>> rightHalf;   
    
    MedianFinder() {
    }
    
    void addNum(int num) {
        /**
        If size of both leftHalf and rightHalf is same,
        then push to leftHalf
        Otherwise, push to rightHalf
        */
        if(leftHalf.empty() == true){
            leftHalf.push(num);
            return;
        }
        
        
        if(leftHalf.size() == rightHalf.size()){
            //push to left half
            //left -> [2,5,7] right[10,34,89]
            //push 45
            //left -> [2,5,7,10] and right [34,45,90]
            if(num <= rightHalf.top()){
                leftHalf.push(num);
            }else{
                int rightMin = rightHalf.top(); //10
                rightHalf.pop();
                leftHalf.push(rightMin);
                rightHalf.push(num);
            }
        }else{
            //push to right half
            //left -> [2,5,7] right [10, 34]
            //push 1
            //left -> [1,2,5] right [7,10,34]
            if(num < leftHalf.top()){
                int leftMax = leftHalf.top();
                leftHalf.pop();
                rightHalf.push(leftMax);
                leftHalf.push(num);
            }else{
                rightHalf.push(num);                
            }
        }
    }
    
    double findMedian() {
        if(leftHalf.size() == rightHalf.size()){
            return (leftHalf.top() + rightHalf.top())/2.0;
        }else{
            return leftHalf.top();
        }
    }
};
