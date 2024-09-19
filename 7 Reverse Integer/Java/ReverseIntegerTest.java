import org.junit.Before;
import org.junit.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class ReverseIntegerTest {
    ReverseInteger ri;

    @Before
    public void setUp() {
        ri = new ReverseInteger();
    }

    @Test
    public void test1() {
        assertEquals(321, ri.reverse(123));
    }

    @Test
    public void test2() {
        assertEquals(-321, ri.reverse(-123));
    }

    @Test
    public void test3() {
        assertEquals(21, ri.reverse(120));
    }
}
