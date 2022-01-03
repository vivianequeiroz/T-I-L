import { validaPesoEAltura } from "./modules/calculaImc.js";
import { adicionaNovoPaciente } from "./modules/form.js";

function inicializaApp() {
  validaPesoEAltura();
  adicionaNovoPaciente();
}

inicializaApp();
