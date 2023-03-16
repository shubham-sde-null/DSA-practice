1)generally we use linear search to find the element in array or vector but the time complexity is O(n)
2)we can use binary search to so the searching and here we get the timecomplexity as O(logn) which is good as compared to the O(n)
3)now let's see where we can apply the binary search, we can apply the binary search in a monotonic function, monotonic functions are those functions which maintains the ordet like if there is some array which has all the values inside it in increasing order or the array where the elements are in the decreasing order such arrays are called the array following monotonic behaviour.
1 3 5 6 7 monotonic
1 2 5 6 4 non monotonic
7 4 3 2 1 monotonic
if we see the graph of monotonic they are increasing exponentially or decreasing exponentially but a sine map will never become monotonic because all the combintion of increasing and decreasing values we just need either increasing or decreasing.
4)we can use binary search in the predicate function, predicate function is a function where we get true or false sequence if there is false then their will be sequence of false but if there comes true then their will be the sequence of true and their won't come false afterwads ex: FFFFFTTTTTTT
same things will happen if their is true at the begining then their will be true till no false will be found
ex: TTTTTFFFFFFF
5)basically we use binary search to neglect the particular part such that the number of seraches can be reduced.
6)in binary search we use the search space, using this search space we compare the values of the left and right side of the middle and then accordingly we change the start and end
condition I am going to use for the binary search
int lo=0;
int hi=n-1;
//what will happen over here it will run till only two elements are left in the array and then I can compare the remaining two elements and this is how I will get the solution
while(hi-lo>1){
    //here we consider the value which we get in the mid is strirctly less then the value at mid so we start from the value ahead of mid
    if(v[mid]<key){
        lo=mid+1;
    }
    //here we condiser the key is greater then or equal to the key
    else{
        hi=mid;
    }
}
//after while loop I will compare the lo and hi in the array with the key if any of the one satisfies return that value else return -1 if the value is not found.
//how we select the start and end or lo or hi it is based on wether we have to inclued the mid or not and based on that we change the start and the end
