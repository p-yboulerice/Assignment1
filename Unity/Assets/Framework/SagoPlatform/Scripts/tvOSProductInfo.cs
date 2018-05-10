﻿namespace SagoPlatform {
	
	using UnityEngine;
	
	#if UNITY_EDITOR
	using UnityEditor;
	#endif
	
	public class tvOSProductInfo : ProductInfo {
		
		
		#region Fields
		
		[SerializeField]
		public string AppStoreProvisioningProfile;

		[SerializeField]
		public string UrlScheme;

		#endregion
		
		
		#region MonoBehaviour Methods
		
		#if UNITY_EDITOR
		override public void Reset() {
			base.Reset();
			this.Build = 0;
		}
		#endif
		
		#endregion
		
		
	}
	
}