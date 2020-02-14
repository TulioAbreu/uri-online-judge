CREATE TABLE providers
(
    ID INT,
    name VARCHAR,
    street VARCHAR,
    city VARCHAR,
    state char(2),
    PRIMARY KEY (ID)
);

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
    FOREIGN KEY (id_providers) REFERENCES providers,
    FOREIGN KEY (id_categories) REFERENCES categories
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

INSERT INTO providers (ID, name, street, city, state) VALUES (1, 'Henrique', 'Av Brasil', 'Rio de Janeiro', 'RJ');
INSERT INTO providers (ID, name, street, city, state) VALUES (2, 'Marcelo Augusto', 'Rua imigrantes', 'belo horizonte', 'MG');
INSERT INTO providers (ID, name, street, city, state) VALUES (3, 'Caroline Silva', 'Av Sao Paulo', 'salvador', 'BA');
INSERT INTO providers (ID, name, street, city, state) VALUES (4, 'Guilerme Staff', 'Rua Central', 'porto alegre', 'RS');
INSERT INTO providers (ID, name, street, city, state) VALUES (5, 'Isabela Moraes', 'Av Juiz Grande', 'curitiba', 'PR');
INSERT INTO providers (ID, name, street, city, state) VALUES (6, 'Francisco Accerr', 'Av Paulista', 'sao paulo', 'SP');

INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (1, 'two-door wardrobe', 100, 800, 6, 8);
INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (2, 'dining table', 1000, 560, 1, 9);
INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (3, 'towel holder', 1000, 25.50, 5, 1);
INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (4, 'computer desk', 350, 320.50, 4, 6);
INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (5, 'chair', 3000, 210.64, 3, 6);
INSERT INTO products (ID, name, amount, price, id_providers, id_categories) VALUES (6, 'single bed', 750, 460, 1, 2);


-- //////////////////////////////////////////////////////////////////////////////

SELECT products.name, providers.name
FROM (products JOIN providers ON products.id_providers=providers.ID)
WHERE id_categories = 6;