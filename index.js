const path = require("path");
const { exec, spawn } = require("node:child_process");

const v1 = [1, 2, 3];
const v2 = [4, 5, 6];

function promisify() {
  return new Promise((resolve) => {
    exec("a.exe", {}, (err, stdout, stderr) => {
      if (err) {
        console.log(stderr);
        resolve();
        return;
      }
      console.log(stdout);
      resolve(stdout);
    });
  });
}

function promisify2() {
  return new Promise((resolve) => {
    let res;
    const dot = spawn("b.exe");
    dot.stdin.write(v1.length.toString() + " " + v1.join(" ") + " ");
    dot.stdin.write(v2.length.toString() + " " + v2.join(" "));
    dot.stdin.end();
    dot.stdout.on("data", (data) => {
      //console.log(`child stdout:\n${data}`);
      resolve(data);
    });
    dot.stderr.on("data", (data) => {
      console.log("vettori non conformi");
    });
  });
}

(async () => {
  let start = Date.now();
  let res = await promisify2();
  console.log("Time spent: ", (Date.now() - start) / 1000);
  console.log(res.toString());
})();
