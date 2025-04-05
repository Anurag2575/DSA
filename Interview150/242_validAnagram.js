var isAnagram = function(s, t) {
    let mpp = new Map();
    if(s.length !== t.length) return false;
    for(let char of s){
        mpp.set(char, (mpp.get(char) || 0) + 1);
    }

    for(let char of t){
        if(!mpp.has(char) || mpp.get(char) === 0) return false;
        mpp.set(char, mpp.get(char) - 1);
    }
    return true;
};
