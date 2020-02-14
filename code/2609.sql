    CREATE TABLE categories 
    (
        ID INT,
        name VARCHAR,
        PRIMARY KEY (ID)
    );

    CREATE TABLE products
    ( 
        ID INT,
        name VARCHAR,
        amount NUMERIC,
        price NUMERIC,
        id_categories INT,
        PRIMARY KEY (ID)
    );


    INSERT INTO categories (ID, name) VALUES (1, 'wood');
    INSERT INTO categories (ID, name) VALUES (2, 'luxury');
    INSERT INTO categories (ID, name) VALUES (3, 'vintage');
    INSERT INTO categories (ID, name) VALUES (4, 'modern');
    INSERT INTO categories (ID, name) VALUES (5, 'super luxury');

    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (1, 'two-doors wardrobe',  100,    800,    1);
    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (2, 'dining table',        1000,   560,    3);
    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (3, 'towel holder',        10000,   25.50,  4);
    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (4, 'computer desk',       350,    320.50, 2);
    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (5, 'chair',               3000,   210.64, 4);
    INSERT INTO products (ID, name, amount, price, id_categories) VALUES (6, 'single bed',          750,    460,    1);


-- //////////////////////////////////////////////////////////////////////////////

SELECT products.ID, products.name 
FROM (products JOIN categories ON products.id_categories=categories.ID) 
WHERE categories.name LIKE 'super%';