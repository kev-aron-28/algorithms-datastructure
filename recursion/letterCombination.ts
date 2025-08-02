function combination(chars: string[], len: number) {
  let result: string[] = [];
  function backtrack(path: string) {
    
    for(const char of chars) {
      backtrack(path + char);
    }
  }
  backtrack("");
}
