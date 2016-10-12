
/* Written By Cosmin Pintoiu
*  Bigstep.com
*  Distrubuted under the same license as apache jmeter itself.
* http://www.apache.org/licenses/LICENSE-2.0
*/

import java.io.File;
import java.io.Serializable;


public class JNITest {

	static{
		System.load("/opt/libJNI.so");;
		}

	// public native void greet();
	public native void he_version();
	public native int he_open(String url, String name, int flags, String env);
	public native void he_close(int he_handle);
	public native int intMethod(int n);
	
	public static void main(String[] args){
	int u;
	// check if argumnets were given
	 if (args.length != 1)
        	{
          System.out.println("Usage: const char *url");
          System.out.println("Example: he_open");
          System.exit(1);
       		 }
		JNITest helium=new JNITest();

		url = new String(args[0]).toString();
		//url = new String(args[0]).toString();
		//url = new String(args[0]).toString();

    	  System.out.println("url" + url);
    	  System.out.println("call he_open");
		u = helium.he_open(url, "datastoreTest1",0,NULL);

	  System.out.println("Datastore created");	
	  System.out.println("call he_close");
		helium.he_close(u);

		// helium.greet();
		helium.he_version();

		int square = helium.intMethod(123);
		System.out.println("intMethod: " + square);
		
	}
}	

