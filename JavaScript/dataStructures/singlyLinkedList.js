class Node {
    constructor(data, next){
        this.data = data
        this.next = next
    }
}

class LinkedList{
    constructor(){
        this.head = null
        this.size = 0
    }

    //insert first node
    insertFirst(data){
        this.head = new Node(data, this.head)
        this.size++;
    }

    //insert last node
    insertLast(data){
        let newNode = new Node(data)
        if(this.head){
            let current = this.head
            while(current.next){
                current = current.next
            }
            current.next = newNode
        }else{
            this.head = newNode
        }
        this.size++
    }

    //insert at method
    insertAt(data, index){
        let newNode = new Node(data)
        if(index >= 0 && index < this.size){
            if (index == 0){
                this.insertFirst(data)
            }
            else if(index == this.size - 1){
                this.insertLast(data)
            }else{
                let current = this.head
                let previous
                let cont = 0
                while(cont != index){
                    previous = current
                    current = current.next
                    cont++
                }
                previous.next = newNode
                newNode.next = current
            }
        }
    }

    //delete first node
    deleteFirst(){
        let current = this.head
        this.head = this.head.next
        current.next = null
    }

    //delete last node
    deleteLast(){
        let current = this.head
        let prev
        while(current.next){
            prev = current
            current = current.next
        }
        prev.next = null
    }

    //delete node at a specific index
    deleteAt(index){
        if(this.head){
            if(index == 0){
                this.deleteFirst()
            }
            else if(index == this.size - 1){
                this.deleteLast()
            }else{
                let current = this.head
                let cont = 0
                let prev
                while(cont < index){
                    prev = current
                    current = current.next
                    cont++;
                }
                prev.next = current.next
                current.next = null
            }
        }else{
            console.log("Lista enlazada vacia")
        }
    }

    //print node values
    printNodeValues(){
        let current = this.head
        while(current){
            console.log(current.data);
            current = current.next
        }
    }
}


//test cases
const myLinkedList = new LinkedList()
myLinkedList.insertFirst(100)
myLinkedList.insertFirst(200)
myLinkedList.insertFirst(200)
myLinkedList.insertLast(300)
myLinkedList.insertAt(101, 2)
myLinkedList.printNodeValues()
console.log("----------------")
myLinkedList.deleteAt(2)
myLinkedList.printNodeValues()

