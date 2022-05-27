function Queue () {

    array = [];

    this.print = function () {
        console.log(array);
    };

    this.enqueue = function (data) {
        array.push(data);
    };

    this.dequeue = function () {
        array.shift();
    };

    this.front = function () {
        return array[0];
    };
    
    this.size = function () {
        return array.length;
    };

    this.isEmpty = function () {
        return array.length == 0;
    };

}

let myQueue = new Queue();
myQueue.enqueue(12);
myQueue.print();