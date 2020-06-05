/*2604	Menores que 10 ou Maiores...	Accepted	PostgreSQL	0.002	22/06/2019 22:25:52*/
SELECT
    products.id,
    products.name
FROM
    products
WHERE
    products.price > 100 OR products.price < 10;