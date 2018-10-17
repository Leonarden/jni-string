package com.res.jnistring.jni;

import java.io.File;
import java.io.IOException;
import java.nio.file.FileStore;
import java.nio.file.FileSystem;
import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.nio.file.PathMatcher;
import java.nio.file.WatchService;
import java.nio.file.attribute.UserPrincipalLookupService;
import java.nio.file.spi.FileSystemProvider;
import java.util.Set;
import java.util.logging.Logger;

public class JniString {
    
	//todo remove
	private  Logger log;
	private long hc = -1;
	private String s;
	
	
	   public JniString(String s) {
		   this.s = s;
		   this.hc = this.hashCode();
		   log = Logger.getLogger(JniString.class.getName()+ "-" + this.hc);
		   FileSystem  fsys = FileSystems.getDefault();
		   Path p = fsys.getPath("libjnistring.so");
		   System.load(p.toAbsolutePath().toString());
		   
	   }
	
	
	
    
    public void print() {  this.print(s);  }
    
    public void println() { this.println(s);}
    
    public boolean equals(String s1) { return this.equals(s, s1);  }
 
    public String concat(String s1){
    	s = this.concat(s,s1);
    	return s;
    	}
    
    public byte[] bytes() { return this.bytes(s); }
    
    public String[] split(String regex) { return this.split(s, regex);  }
    
    // should return a TreeSet
    public Set<String> toSet() { return this.toSet(s);}

    private native void print(String s1);
	private native void println(String s1);
    private native boolean equals(String s1, String s2);
    private native String concat(String s1, String s2);
    private native int indexOf(String s1, char c1);
    private native byte[] bytes(String s1);
    private native String[] split(String s1, String regex);
    
    
    private native Set<String> toSet(String s1);


   


}
