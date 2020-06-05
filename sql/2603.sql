/*2603	Endereço dos Clientes	Accepted	PostgreSQL	0.001	22/06/2019 22:22:03*/
SELECT
    customers.name,
    customers.street
FROM
    customers
WHERE
    customers.city = 'Porto Alegre';