ans = 0;
Yash = () => {
  console.log("Yash Pandey Function Called");
  ans += 1;
};
Result = () => {
  console.log(`Result Function Called , ans = ${ans}`);
};

for (let i = 0; i < 4; i++) {
  Yash();
  Yash();
  Yash();
  Result();
}
