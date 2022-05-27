//Array implementation

function PriorityQueue () {

    let array = [];

    this.enqueue = function (newMemb) {

        if(this.isEmpty()) {
            array.push(newMemb);
        }else{

            let added = false;

            for(let i = 0; i < array.length; i++){
                if (newMemb[1] < array[i][1]){
                    array.splice(i, 0, newMemb);
                    added = true;
                    break;
                }
            }

            if(!added){
                array.push(newMemb);
            }

        }
    }

    this.dequeue = function () {
        let currentMax = array.shift();
        return currentMax[0];
    }

    this.front = function () {
        return array[0];
    }

    this.isEmpty = function (){
        return array.length === 0;
    }

    this.print = function () {
        console.log(array);
    }

    this.size = function () {
        return array.length();
    }

}

let newPrior = new PriorityQueue();
newPrior.enqueue(["Microsoft" , 3])
newPrior.enqueue(["Google" , 1])
newPrior.enqueue(["Apple" , 2])
newPrior.enqueue(["Meta" , 1])
console.log(newPrior.front());
console.log(newPrior.dequeue());
newPrior.print()

