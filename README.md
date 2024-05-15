# Client-server application HTTPP 

#### By Jheremy Kevin Tancara Zambrana

---

Program execution:

    ./server -p <p>

where < p > is the port on which the server will be run

---

La idea es 

### MORE EXPLICATIONS

#### GET:
Para ejecutar una solicitud GET, necesitas enviar una solicitud HTTP GET al servidor en la ruta correcta. Por ejemplo, si tienes una ruta /hello definida para responder a las solicitudes GET, puedes usar herramientas como cURL o un navegador web para enviar una solicitud GET a http://tu_servidor:puerto/hello.

    curl http://tu_servidor:puerto/hello

Yo me cree un archivo:

    echo "Hello, world!" > /home/fundacion/hello

Y lo ejecute de la siguiente manera

    http://localhost:3030/home/fundacion/hello

POST:
Para ejecutar una solicitud POST, también necesitas enviar una solicitud HTTP POST al servidor en la ruta adecuada. Puedes usar cURL o herramientas similares para enviar datos junto con la solicitud POST, si es necesario.

    curl -X POST -d "data=a_enviar" http://tu_servidor:puerto/tu_ruta_post

PUT:
De manera similar a POST, para ejecutar una solicitud PUT, necesitas enviar una solicitud HTTP PUT al servidor en la ruta correcta. Al igual que con POST, puedes usar cURL o herramientas similares para enviar datos junto con la solicitud PUT.

    curl -X PUT -d "data=a_enviar" http://tu_servidor:puerto/tu_ruta_put