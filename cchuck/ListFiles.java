import java.io.*;
class ListFiles {
static void listFile(File f,PrintWriter os){
   if(f.isDirectory()){
      File list[] = f.listFiles();
      for(File f1:list){
        listFile(f1,os);
      }
   } else {
      os.print(",\""+f.getPath()+"\"");
   } 
}

  public static void main(String args[]) throws Exception {
     File f=new File("examples");
     PrintWriter fp = new PrintWriter(new FileOutputStream("filelist.json"));
    fp.print("{\"list\":[[]");
        listFile(f,fp);
    fp.println("]}");
     fp.close();
  }
}
