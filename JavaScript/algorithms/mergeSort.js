//divide and conquer algorithm
//(n log n) -> time complexity

function mergeSort(array){

    if(array.length <= 1){
        return array;
    }

    const half = Math.floor(array.length / 2);
    const left = array.slice(0, half);
    const right = array.slice(half);

    return merge(mergeSort(left), mergeSort(right));

}

function merge(left, right){
    const temporalArray = [];
    
    while(left.length && right.length){

        if(left[0] < right[0]){
            temporalArray.push(left.shift());
        }else{
            temporalArray.push(right.shift());
        }

    }
    return temporalArray.concat(left.slice()).concat(right.slice());
}
