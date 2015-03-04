import java.io.*; 
import java.net.*; 

class TCPServer { 

  public static void main(String argv[]) throws Exception 
    { 
	ServerSocket serverSock = new ServerSocket(6789);
		while(true)
		{
			try {
				Socket connectionsocket = serverSock.accept();
				BufferedReader input =
				            new BufferedReader(new InputStreamReader(connectionsocket.
				            getInputStream()));
				DataOutputStream output =
				            new DataOutputStream(connectionsocket.getOutputStream());
				
				String request=input.readLine();
				System.out.println(request);
				String[] requestParam = request.split(" ");
				String path = "."+requestParam[1];


				File file = new File(path);
				if (!file.exists()) {
					System.out.println("not exist");
				    output.writeBytes("HTTP/1.0 404 Not Found\r\nConnection: close\r\n\r\n"); 
				}
				else{
					System.out.println("exist");
					FileReader fr = new FileReader(file);
					BufferedReader bfr = new BufferedReader(fr);
					String line;
					output.writeBytes("HTTP/1.0 200 OK \r\n");
					output.writeBytes("Connection: close\r\n");
					output.writeBytes("Content-Type: text/html\r\n\r\n");
					while ((line = bfr.readLine()) != null) {
						output.writeBytes(line);
					}
					bfr.close();
					fr.close();
				}
				output.close(); 
			} 
			catch (Exception e) {
					
			}
		}   
	} 
} 
 
