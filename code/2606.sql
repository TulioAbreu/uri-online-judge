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
    id_providers INT,
    id_categories INT,
    PRIMARY KEY (ID),
    FOREIGN KEY (id_providers) REFERENCES providers
);


INSERT INTO categories (ID, name) VALUES (1, 'old stock');
INSERT INTO categories (ID, name) VALUES (2, 'new stock');
INSERT INTO categories (ID, name) VALUES (3, 'modern');
INSERT INTO categories (ID, name) VALUES (4, 'commercial');
INSERT INTO categories (ID, name) VALUES (5, 'recyclable');
INSERT INTO categories (ID, name) VALUES (6, 'executive');
INSERT INTO categories (ID, name) VALUES (7, 'superior');
INSERT INTO categories (ID, name) VALUES (8, 'wood');
INSERT INTO categories (ID, name) VALUES (9, 'super luxury');
INSERT INTO categories (ID, name) VALUES (10, 'vintage');


INSERT INTO products (ID, name, amount, price, id_categories) VALUES (1, 'lampshade', 100, 800, 8);
INSERT INTO products (ID, name, amount, price, id_categories) VALUES (2, 'table for painting', 1000, 560, 9);
INSERT INTO products (ID, name, amount, price, id_categories) VALUES (3, 'notebook desk', 1000, 25.50, 1);
INSERT INTO products (ID, name, amount, price, id_categories) VALUES (4, 'computer desk', 350, 320.50, 6);
INSERT INTO products (ID, name, amount, price, id_categories) VALUES (5, 'chair', 3000, 210.64, 6);
INSERT INTO products (ID, name, amount, price, id_categories) VALUES (6, 'home alarm', 750, 460, 2);


-- //////////////////////////////////////////////////////////////////////////////

SELECT products.ID, products.name 
FROM (products JOIN categories ON products.id_categories=categories.ID) 
WHERE categories.name LIKE 'super%';