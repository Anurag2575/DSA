var canConstruct = function(ransomNote, magazine) {
    let mpp = new Map();
    for(let char of magazine){
        mpp.set(char, (mpp.get(char) || 0)+1);
    }
    for(let char of ransomNote){
        if(!mpp.has(char) || mpp.get(char) === 0) return false;
        mpp.set(char, mpp.get(char) - 1);
    }
    return true;
};
