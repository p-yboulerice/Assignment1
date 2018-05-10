namespace SagoEasing {
	
	using UnityEngine;
	
	public class Circular {
		
		// ================================================================= //
		// Float Methods
		// ================================================================= //
		
		public static float EaseIn(float a, float b, float t) {
			return _EaseIn(t, a, b - a, 1f);
		}
		
		public static float EaseOut(float a, float b, float t) {
			return _EaseOut(t, a, b - a, 1f);
			
		}
		
		public static float EaseInOut(float a, float b, float t) {
			return _EaseInOut(t, a, b - a, 1f);
			
		}
		
		
		// ================================================================= //
		// Vector3 Methods
		// ================================================================= //
		
		public static Vector3 EaseIn(Vector3 a, Vector3 b, float t) {
			return a + (b - a) * EaseIn(0f, 1f, t);
		}
		
		public static Vector3 EaseOut(Vector3 a, Vector3 b, float t) {
			return a + (b - a) * EaseOut(0f, 1f, t);
		}
		
		public static Vector3 EaseInOut(Vector3 a, Vector3 b, float t) {
			return a + (b - a) * EaseInOut(0f, 1f, t);
		}
		
		
		// ================================================================= //
		// Helper Methods
		// ================================================================= //
		
		static float _EaseIn(float t, float b, float c, float d) {
			return -c * (Mathf.Sqrt(1f - (t /= d) * t) - 1f) + b;
		}
		
		static float _EaseOut(float t, float b, float c, float d) {
			return c * Mathf.Sqrt(1f - (t = t/d - 1f) * t) + b;
		}
		
		static float _EaseInOut(float t, float b, float c, float d) {
			if ((t /= d / 2f) < 1f)
				return -c / 2f * (Mathf.Sqrt(1f - t * t) - 1f) + b;
			
			return c / 2f * (Mathf.Sqrt(1f - (t -= 2f) * t) + 1f) + b;
		}
		
		
	}
	
}