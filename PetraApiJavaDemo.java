import sinsiway.*;

public class PetraApiJavaDemo {

  public static void main(String[] args) {
    cipherDemo();
  }

  private static void cipherDemo() {
    try {
      sinsiway.PcaSessionPool.initialize("./petra_cipher_api.conf", ""); 
      
      sinsiway.PcaSession session = sinsiway.PcaSessionPool.getSession();

      String encryptString = new String();
      String decryptString = new String();

      int keyId = 100;
      String keyName = new String("AES128");

      String plainString = new String("Believe in yourself.");
      encryptString = session.encrypt(keyId, plainString);
      decryptString = session.decrypt(keyId, encryptString);

      System.out.println(
        "\n|| CASE 01 : Use Column Id" +
        "\n|| ex) String sinsiway.PcaSession.decrypt(int eci, String src) throws PcaException\n||"
      );
      System.out.println("|| [" + plainString + "]\n||");
      System.out.println("|| Encrypt String : " + encryptString);
      System.out.println("|| Decrypt String : " + decryptString);

      plainString = new String("Follow your heart.");
      encryptString = session.encrypt(keyName, plainString);
      decryptString = session.decrypt(keyName, encryptString);

      System.out.println(
        "\n|| CASE 02 : Use Column Name" +
        "\n|| String sinsiway.PcaSession.encrypt(String ecn, String src) throws PcaException\n||"
      );
      System.out.println("|| [" + plainString + "]\n||");
      System.out.println("|| Encrypt String : " + encryptString);
      System.out.println("|| Decrypt String : " + decryptString);

    } catch (PcaException e) {
      System.out.println(
        "error_code = " + e.getErrCode() + "  error_message = " + e.getMessage()
      );
      return;
    }
  }
}
