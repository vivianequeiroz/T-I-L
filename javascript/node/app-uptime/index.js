const oneYear = 8760; //in hours
const totalDisponibility = 100;

const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

readline.question(
  "Quantas horas seu sistema ficou indisponível?",
  (downtime) => {
    calculateUptime(downtime);
    readline.close();
  }
);

function calculateUptime(downtime) {
  const uptime = ((oneYear - downtime) / oneYear) * totalDisponibility;

  console.log("A disponibilidade é de: " + uptime.toFixed(3) + "%.");
}
