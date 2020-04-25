function min_vuelto(divisas, monto) {
    var shorted_arr = [],
        array_cantidad = [];

    divisas.forEach(cur => {

        if (cur <= monto) {

            shorted_arr.push(cur);
            array_cantidad.push(0);

        }
    });

    shorted_arr = shorted_arr.reverse();

    var acumulador = 0,
        flag = 0,
        cantidad = 0,
        saved_arr = [],
        cantidad_min = 0,
        combinacion = [],
        combinacion_min = [];

    shorted_arr.forEach(cur => saved_arr.push(cur));

    for (var k = 0, l = shorted_arr.length; k < l; k++) {

        acumulador = 0;
        cantidad = 0;
        flag = 0;
        combinacion = [];

        while (acumulador < monto) {

            if ((acumulador + shorted_arr[flag]) <= monto) {

                acumulador += shorted_arr[flag];
                combinacion.push(shorted_arr[flag]);
                cantidad++;
                continue;

            }

            flag++;

        }
        if (k == 0) {
            cantidad_min = cantidad;
            combinacion_min = combinacion;
        }
        if (cantidad < cantidad_min) {

            cantidad_min = cantidad;
            combinacion_min = combinacion;
        }
        shorted_arr.splice(0, 1);
    }
    return combinacion_min;
}


var set1 = [10, 50, 70, 100],
    set2 = [1, 10, 21, 34, 70, 100, 350, 1225, 1500];
monto = 140;

var value = min_vuelto(set2, 351);

console.log(value);
