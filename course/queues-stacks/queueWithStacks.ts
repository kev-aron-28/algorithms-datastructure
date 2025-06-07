class QueueWithStacks {
  private enqueueStack: number[];
  private dequeueStack: number[];
  constructor() {
    this.enqueueStack = [];
    this.dequeueStack = [];
  }
  
  
  enqueue(element: number) {
    this.enqueueStack.push(element)
  }
  
  
  dequeue() {
    if(this.isEmpty()) {
      throw new Error("Queue is empty");
    }
    
    if(this.dequeue.length === 0) {
      while(this.enqueueStack.length > 0) {
        this.dequeueStack.push(this.enqueueStack.pop()!);
      }
    }
    
    return this.dequeueStack.pop();
  }
  
  
  isEmpty() {
    return this.enqueueStack.length == 0 && this.dequeueStack.length == 0;
  }
}
