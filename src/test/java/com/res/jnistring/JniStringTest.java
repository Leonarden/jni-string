package com.res.jnistring;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;


import com.res.jnistring.jni.JniString;
import com.res.jnistring.util.PerfTime;

/**
 * Unit test for simple App.
 */
public class JniStringTest 
    extends TestCase
{
    private static PerfTime perfT = new PerfTime(JniStringTest.class.getName());
	
	/**
     * Create the test case
     *
     * @param testName name of the test case
     */

	public JniStringTest( String testName )
    {
        super( testName );
    }

    /**
     * @return the suite of tests being tested
     */
    public static Test suite()
    {
        return new TestSuite( JniStringTest.class );
    }

    /**
     * Rigourous Test :-)
     */
    public void testApp()
    {
    	JniString ji = new JniString("This is a sentence");
        
    	System.out.println("Print function");
        perfT.startNano();
        ji.print();
        perfT.endNano();
        System.out.println("End Print: " + perfT.getPerfTimeStr());
    	
    	
    	
    	assertTrue( true );
    }
}
